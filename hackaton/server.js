const express = require('express');
const fs = require('fs');
const xlsx = require('xlsx');
const app = express();

app.use(express.json());

// Ruta para guardar los datos en un archivo Excel
app.post('/guardar', (req, res) => {
    const respuestas = req.body;

    const filePath = 'respuestas.xlsx';
    let workbook;
    let worksheet;

    // Si el archivo Excel ya existe, lo cargamos, si no, creamos uno nuevo
    if (fs.existsSync(filePath)) {
        workbook = xlsx.readFile(filePath);
        worksheet = workbook.Sheets[workbook.SheetNames[0]];
    } else {
        workbook = xlsx.utils.book_new();
        worksheet = xlsx.utils.json_to_sheet([]);
        xlsx.utils.book_append_sheet(workbook, worksheet, 'Respuestas');
    }

    // Obtener las respuestas y convertirlas en una fila
    const nuevaFila = [respuestas.color];

    // Agregar la nueva fila a la hoja de cálculo
    const currentRange = xlsx.utils.decode_range(worksheet['!ref']);
    const startRow = currentRange.e.r + 1;
    xlsx.utils.sheet_add_aoa(worksheet, [nuevaFila], { origin: `A${startRow + 1}` });

    // Guardar el archivo actualizado
    xlsx.writeFile(workbook, filePath);

    res.json({ message: 'Datos guardados exitosamente en Excel.' });
});

app.listen(3000, () => {
    console.log('Servidor corriendo en http://localhost:3000');
});