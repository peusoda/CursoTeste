nota = []
nome = str(input("Informe o nome do(a) aluno(a): \n"))

for c in range(3):
    nota.append(int(input("Informe as notas: ")))

media = sum(nota)/3

if media >= 7:
    print(f"O(A) aluno(a) {nome} foi aprovado(a)")

elif media >= 5.1 and media <= 6.9:
    print(f"O(A) aluno(a) {nome} ficou de recuperação!")

elif media <= 5:
    print(f"O(A) aluno(a) {nome} foi reprovado(a)")

#▒█▀▀█ █▀▀█ █░█ █░█ █▀▀ █▀▀█ ▀▀█ 
#▒█▀▀▄ █▄▄█ █▀▄ █▀▄ █▀▀ █▄▄▀ ▄▀░ 
#▒█▄▄█ ▀░░▀ ▀░▀ ▀░▀ ▀▀▀ ▀░▀▀ ▀▀▀