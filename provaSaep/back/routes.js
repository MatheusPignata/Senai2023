const expree = require('express');

const routes = expree.Router();

const Alocacao = require('./scr/controller/Alocacao');

routes.get('/alocacoes', Alocacao.listar);
routes.post('/cadastrar', Alocacao.cadastrar);

module.exports = routes;