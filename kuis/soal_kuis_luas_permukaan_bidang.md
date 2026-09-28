# 06KUIS. Luas Permukaan Bidang

| Parameter | Batasan |
| :--- | :--- |
| **Time Limit** | 2 s |
| **Memory Limit** | 256 MB |

---

## Deskripsi

Diketahui 4 bentuk bidang, yaitu **Lingkaran**, **Segitiga**, **Segiempat**, dan **Silinder**.
- **Lingkaran** memiliki atribut radius atau jari-jari (`double`).
- **Segitiga** memiliki alas (`double`) dan tinggi (`double`).
- **Segiempat** memiliki panjang (`double`) dan lebar (`double`).
- **Silinder** memiliki atribut tambahan berupa tinggi (`double`).

Semua bentuk bidang ini dapat dihitung nilai luas permukaannya masing-masing menggunakan fungsi bernama `hitungLuas()`. Setiap bidang memiliki identitas (`ID`) dengan tipe data `string`.

> **Bantuan:** Luas permukaan silinder adalah $2\pi r(r + t)$ di mana $r$ adalah jari-jari, dan $t$ adalah tinggi silinder.

Untuk mengolah data keempat bentuk tersebut, disusun struktur pewarisan (inheritance) sebagai berikut:

```text
               Bidang
                 |
      +----------+----------+
      |          |          |
  Lingkaran   Segitiga   Segiempat
      |
   Silinder
```

Susunlah program OOP untuk mengolah beberapa objek dan menampilkan total luas permukaan untuk objek pada selang tertentu. Objek dimulai pada posisi ke-1 (*1-based indexing*).

---

## Batasan

- $1 \le N \le 1000$
- Gunakan nilai $\pi = 3.14$ untuk perhitungan luas lingkaran.
- Kode program harus mengimplementasikan konsep **enkapsulasi**, **pewarisan (inheritance)**, dan **polimorfisme**.
- Menggunakan struktur data `Vector` untuk menyimpan seluruh objek.

---

## Format Masukan (Input)

```text
[N, banyaknya objek]
[N baris objek dengan ID Bidang, diikuti nilai atribut masing-masing]
[a b], total luas dari posisi a sampai dengan b
[-9], akhir dari query
```

---

## Format Keluaran (Output)

Total luas objek pada selang $a$ sampai dengan $b$, dituliskan dalam 2 digit di belakang tanda desimal dengan format:
`a-b : [total_luas]`

---

## Contoh Masukan (Sample Input)

```text
5
X121 Segitiga 3.5 8
L276 Lingkaran 5
S902 Silinder 8.5 7
P312 Segiempat 3 8
L234 Lingkaran 6
1 5
2 4
-9
```

---

## Contoh Keluaran (Sample Output)

```text
1-5 : 1056.92
2-4 : 929.89
```

---

## Penjelasan Contoh (Explanation of Sample)

- Total luas objek ke-1 sampai dengan ke-5 sebesar $1056.92$
- Total luas objek ke-2 sampai dengan ke-4 sebesar $929.89$