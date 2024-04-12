package br.com.UNIPSGF.model.vo;

public class Curso {
    private String nome;
    private Boolean nivel;
    private Integer ano;

    public Curso() {
    }
    
    public Curso(String nome, Boolean nivel, Integer ano) {
        this.nome = nome;
        this.nivel = nivel;
        this.ano = ano;
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Boolean getNivel() {
        return nivel;
    }

    public void setNivel(Boolean nivel) {
        this.nivel = nivel;
    }

    public Integer getAno() {
        return ano;
    }

    public void setAno(Integer ano) {
        this.ano = ano;
    }
    
    
    
}
