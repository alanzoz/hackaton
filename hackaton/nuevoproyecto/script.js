document.getElementById('loginForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Evita que se envíe el formulario

    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;

    // Validar credenciales
    if (username === 'saul' && password === 'perez') {
        // Redirigir a la página de éxito
        window.location.href = 'success.html';
    } else {
        alert('Usuario o contraseña incorrectos');
    }
});