
package br.com.UNIPSGF.model.vo;

public class Aluno {
    
    private String id;
    private String nome;
    
    public Aluno(){
        
    }
    
    public Aluno(String aIdAluno, String aNomeAluno){
        
        this.id = aIdAluno;
        this.nome = aNomeAluno;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    
}
