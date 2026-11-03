flowchart TD
    A([Mulai]) --> B["Aplikasi dibuka"]
    B --> C{"Pilih layanan"}

    C -->|Titip barang| D[/"Terima foto dan detail barang"/]
    D --> E{"Data lengkap dan valid?"}
    E -->|Tidak| F[/"Tampilkan kesalahan"/]
    F --> D
    E -->|Ya| G{"Ada loker kosong?"}
    G -->|Tidak| H[/"Tampilkan loker penuh"/]
    H --> Z([Selesai])

    G -->|Ya| I["Reservasi loker sementara"]
    I --> J["Buat PIN penitipan"]
    J --> K[/"Kirim nomor loker dan PIN"/]
    K --> L{"PIN dimasukkan dan valid?"}
    L -->|Tidak| M{"Batas percobaan tercapai?"}
    M -->|Belum| L
    M -->|Ya| N["Batalkan akses atau reservasi"]
    N --> Z
    L -->|Ya| O["Buka kunci loker"]
    O --> P{"Pintu sudah ditutup?"}
    P -->|Tidak| Q["Tunggu atau tangani timeout"]
    Q --> P
    P -->|Ya| R["Catat konfirmasi penitipan"]
    R --> S[/"Publikasikan laporan barang"/]
    S --> Z

    C -->|Cari barang| T[/"Tampilkan daftar barang temuan"/]
    T --> U[/"Terima pencarian dan pilihan barang"/]
    U --> V[/"Terima bukti kepemilikan"/]
    V --> W["Proses verifikasi klaim"]
    W --> X{"Klaim disetujui?"}
    X -->|Tidak| Y[/"Tolak atau minta bukti tambahan"/]
    Y --> Z
    X -->|Ya| AA["Buat PIN pengambilan sekali pakai"]
    AA --> AB{"PIN pengambilan valid?"}
    AB -->|Tidak| AC[/"Tolak akses atau batasi percobaan"/]
    AC --> Z
    AB -->|Ya| AD["Buka kunci loker"]
    AD --> AE{"Pintu sudah ditutup?"}
    AE -->|Tidak| AF["Tunggu atau tangani timeout"]
    AF --> AE
    AE -->|Ya| AG["Ubah status menjadi selesai"]
    AG --> AH["Kosongkan loker dan nonaktifkan PIN"]
    AH --> Z

    classDef start fill:#dff3e5,stroke:#31835d,color:#20543c
    classDef decision fill:#fff1d6,stroke:#d5a552,color:#684a18
    classDef inputOutput fill:#f3e8ff,stroke:#9670c9,color:#51316f
    classDef process fill:#e5effb,stroke:#76a1d1,color:#26466c

    class A,Z start
    class C,E,G,L,M,P,X,AB,AE decision
    class D,F,H,K,S,T,U,V,Y,AC inputOutput
    class B,I,J,N,O,Q,R,W,AA,AD,AF,AG,AH process
