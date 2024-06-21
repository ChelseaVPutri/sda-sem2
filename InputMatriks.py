baris = int(input("Masukkan banyak baris = "))
kolom = int(input("Masukkan banyak kolom = "))
matrixArr = []

for i in range(1, baris+1):
    element = input(f"Masukkan data baris ke-{i} (dipisahkan spasi) = ").split()
    while len(element) > kolom or len(element) < kolom:
        print("wrong size. pls input again")
        element = input(f"Masukkan data baris ke-{i} (dipisahkan spasi) = ").split()
    matrixArr.append(element)

for baris in matrixArr:
    print()
    for element2 in baris:
        print(element2, end=" ")