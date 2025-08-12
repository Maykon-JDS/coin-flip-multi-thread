# Coin Flip Multi Thread

![Foto de Capa](assets/imgs/foto-de-capa.jpg)

[![licence mit](https://img.shields.io/badge/licence-MIT-blue.svg)](./LICENSE)
[![Conventional Commits](https://img.shields.io/badge/Conventional%20Commits-1.0.0-%23FE5196?logo=conventionalcommits&logoColor=white)](https://conventionalcommits.org)

## Sumário
- [Coin Flip Multi Thread](#coin-flip-multi-thread)
  - [Sumário](#sumário)
  - [Introdução](#introdução)
  - [Tecnologias Usadas](#tecnologias-usadas)
  - [Como Executar o Projeto](#como-executar-o-projeto)
    - [Pré-requisitos](#pré-requisitos)
    - [Passos para compilar o projeto](#passos-para-compilar-o-projeto)
    - [Executando o programa no Windows](#executando-o-programa-no-windows)
    - [Observações](#observações)
  - [Licença](#licença)

## Introdução
Este projeto implementa um **coin flip** (cara ou coroa) utilizando propositalmente uma **condição de corrida** (race condition) no contexto de **programação multithread** com OpenMP.
O objetivo é demonstrar, de forma prática e visual, como a concorrência não controlada pode afetar o resultado de um programa.

Para fins didáticos, o programa executa duas threads que escrevem em uma mesma variável compartilhada sem qualquer sincronização, criando assim um cenário realista para estudo de problemas de concorrência.
Além disso, o projeto é empacotado e compilado dentro de um container Docker, utilizando `docker-compose` para simplificar o build e gerar um executável compatível com Windows.

## Tecnologias Usadas
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)&nbsp;
![OpenMP](https://img.shields.io/badge/OpenMP-00599C?style=for-the-badge)&nbsp;
![Docker](https://img.shields.io/badge/Docker-2CA5E0?style=for-the-badge&logo=docker&logoColor=white)&nbsp;
![Docker Compose](https://img.shields.io/badge/Docker_Compose-2496ED?style=for-the-badge&logo=docker&logoColor=white)&nbsp;
![MinGW-w64](https://img.shields.io/badge/MinGW--w64-004880?style=for-the-badge)&nbsp;

## Como Executar o Projeto

Este projeto utiliza **Docker** e **Docker Compose** para compilar o código C++ com suporte a **OpenMP** e gerar um executável Windows (`.exe`) que pode ser executado localmente.

### Pré-requisitos

Antes de iniciar, verifique se você possui instalados no seu computador:

- [Docker](https://www.docker.com/get-started)
- [Docker Compose](https://docs.docker.com/compose/install/)

### Passos para compilar o projeto

1. **Clonar o repositório**
```bash
   git clone https://github.com/Maykon-JDS/coin-flip-multi-thread.git
   cd coin-flip-multi-thread
````

2. **Construir a imagem Docker e compilar**
```bash
docker compose build
```

3. **Gerar o executável**
```bash
docker compose run --rm builder
```

O executável será gerado na pasta:
```sh
./build/main.exe
```

### Executando o programa no Windows

Após o build, basta abrir um terminal (CMD ou PowerShell) no Windows e executar:

```powershell
.\build\main.exe
```

> 💡 Como o projeto contém **condição de corrida intencional**, os resultados podem variar a cada execução, mostrando ora `par`, ora `impar`.

### Observações

* Este projeto foi projetado para fins **educacionais**, simulando condições de corrida no processamento multi-thread.
* É necessário rodar o executável no **Windows** ou com um emulador compatível com `.exe`.

## Licença
Este projeto está sob a [Licença MIT](./LICENSE). Consulte o arquivo [LICENSE.md](LICENSE.md) para obter mais detalhes.
