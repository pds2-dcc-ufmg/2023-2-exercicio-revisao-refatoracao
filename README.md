Considerações:

As classes conta_corrente, conta_poupanca devem seguir a convenção de nomenclatura que é usar letras minúsculas e underscores para separar palavras. Portanto, tornam-se ContaCorrente e ContaPoupanca;

Os membros das classes (titular, saldo, limiteChequeEspecial, taxaJuros) estão públicos. Modifiquei para serem privados e criei métodos de acesso (getters e setters);

Houve a separação das implementações das classes em arquivos .cpp correspondentes aos headers.

Não havia liberação de memória para os objetos criados no main.cpp, utilizei o delete.


# Exercício de Revisão e Refatoração

O objetivo dessa atividade é praticar a parte de revisão e refatoração utilizando um sistema de controle de versão.

**Considere a seguinte descrição em alto nível da funcionalidade do código:**  
> Você deve desenvolver um sistema de controle de contas bancárias e um banco para gerenciá-las. Cada conta bancária possui um titular e um saldo. O banco permite adicionar e exibir contas. Cada conta bancária pode realizar operações como depósito e saque.

O código atual pode ser compilado/executado usando os seguintes comandos:
```
g++ *.cpp -o vpl_exec
./vpl_exec
```

Você deve criar um **Fork** desse repositório, fazer as alterações que julgar necessárias e então realizar um **Pull Request**. Você é livre para criar outros arquivos, classes, métodos, etc., desde que o main continue produzindo a mesma saída. Lembre-se que essa etapa não altera o comportamento funcional.

No **título** do seu Pull Request, informe o valor MD5 obtido a partir da sua matrícula. Você pode gerar esse valor a partir de diferentes sites, um exemplo está [aqui](https://www.md5.cz/). Lembre-se de também informar seus dados no forms disponibilizado no Moodle. Na descrição faça uma lista/análise detalhada das soluções que você utilizou. Submissões que não seguirem essas instruções não serão avaliadas.

Lembre-se de analisar aspectos como: nomenclatura, formatação, organização, modularização, comentários, aplicação correta dos conceitos de OO, entre outros. Dica: Utilize o catálogo para pensar em possíveis sugestões de refatoração (https://refactoring.com/catalog/).
