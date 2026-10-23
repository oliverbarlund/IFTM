import carros from "./carros.js";

let carroAtual = 0;
let idSlideShow;


document.getElementById("imgCarro").addEventListener("mouseenter", pauseSlideShow);
document.getElementById("imgCarro").addEventListener("mouseout", playSlideShow);


document.getElementById("tempo").addEventListener("change", () => {
    pauseSlideShow();
    playSlideShow();
});

function exibirCarro() {
    document.getElementById("imgCarro").src = `img/${carros[carroAtual].src}`;
    
    document.getElementById("nome").innerHTML = carros[carroAtual].nome;
    document.getElementById("potencia").innerHTML = carros[carroAtual].potencia;
}

function atualizarCarro() {
    if (carroAtual < carros.length - 1) carroAtual++;
    else carroAtual = 0;
    exibirCarro();
}

function playSlideShow() {
    
    pauseSlideShow();

    
    const tempo = Number(document.getElementById("tempo").value);
    idSlideShow = setInterval(atualizarCarro, tempo);
}

function pauseSlideShow() {
    clearInterval(idSlideShow);
}

function main() {
    exibirCarro();
    playSlideShow();
}

main();