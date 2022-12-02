-- phpMyAdmin SQL Dump
-- version 4.2.11
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: 29 Okt 2020 pada 15.22
-- Versi Server: 5.6.21
-- PHP Version: 5.6.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `perpus`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `buku`
--

CREATE TABLE IF NOT EXISTS `buku` (
  `kode_buku` char(7) NOT NULL,
  `judul` varchar(50) NOT NULL,
  `pengarang` varchar(50) NOT NULL,
  `penulis` varchar(50) DEFAULT NULL,
  `tahun_terbit` year(4) NOT NULL,
  `stok_awal` int(2) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data untuk tabel `buku`
--

INSERT INTO `buku` (`kode_buku`, `judul`, `pengarang`, `penulis`, `tahun_terbit`, `stok_awal`) VALUES
('NOR0001', 'English for Businness', 'Mc. Steward', 'Graha Pustaka', 2009, 20),
('NOR0002', 'Pendidikan Kewarganegaraan', 'Ahmad Haris', 'Aksara Pelita', 2010, 40),
('NOR0003', 'Matematika untuk SMK', 'Ridwan Anam', 'Aksara Pelita', 2010, 50),
('PSR0001', 'Manajemen Penjualan', 'Siti Nasuha', 'Bumi Merdeka', 2011, 10),
('PSR0002', 'Strategi Menarik Pelanggan', 'Siti Nasuha', 'Bumi Merdeka', 2011, 10),
('TIK0001', 'Belajar MySQL', 'Abdul Kadir', 'Andi Publisher', 2008, 10),
('TIK0002', 'Handal Pemrograman PHP', 'Lukmanul Hakim', 'Lokomedia', 2009, 20),
('TIK0003', 'Pemrograman JavaScript', 'Abdul Kadir', 'Andi Publisher', 2009, 10),
('TIK0004', 'Pemrograman Berbasis Objek', 'Abdul Kadir', 'Andi Publisher', 2010, 8);

-- --------------------------------------------------------

--
-- Struktur dari tabel `peminjaman`
--

CREATE TABLE IF NOT EXISTS `peminjaman` (
`id_pinjam` int(11) NOT NULL,
  `nis` char(5) NOT NULL,
  `kode_buku` char(7) NOT NULL,
  `tgl_pinjam` date NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;

--
-- Dumping data untuk tabel `peminjaman`
--

INSERT INTO `peminjaman` (`id_pinjam`, `nis`, `kode_buku`, `tgl_pinjam`) VALUES
(1, '11003', 'TIK0004', '2012-09-24'),
(2, '11002', 'TIK0001', '2012-09-24'),
(3, '11004', 'PSR0001', '2012-09-25'),
(4, '11005', 'PSR0002', '2012-09-25'),
(5, '11005', 'PSR0001', '2012-09-25'),
(6, '11005', 'PSR0002', '2012-09-25'),
(7, '12004', 'NOR0001', '2012-09-27'),
(8, '10004', 'NOR0003', '2012-09-28'),
(9, '12003', 'TIK0001', '2012-09-28'),
(10, '12001', 'TIK0001', '2012-09-28');

-- --------------------------------------------------------

--
-- Struktur dari tabel `pengembalian`
--

CREATE TABLE IF NOT EXISTS `pengembalian` (
  `id_pinjam` int(11) NOT NULL,
  `tgl_kembali` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data untuk tabel `pengembalian`
--

INSERT INTO `pengembalian` (`id_pinjam`, `tgl_kembali`) VALUES
(2, '2012-09-26'),
(6, '2012-09-27'),
(3, '2012-09-28'),
(4, '2012-09-28'),
(10, '2012-10-03');

-- --------------------------------------------------------

--
-- Struktur dari tabel `siswa`
--

CREATE TABLE IF NOT EXISTS `siswa` (
  `nis` char(5) NOT NULL,
  `nama` varchar(50) NOT NULL,
  `alamat` varchar(30) NOT NULL,
  `gender` enum('L','P') NOT NULL,
  `jurusan` varchar(3) NOT NULL,
  `kelas` enum('X','XI','XII') NOT NULL,
  `uang_kas` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data untuk tabel `siswa`
--

INSERT INTO `siswa` (`nis`, `nama`, `alamat`, `gender`, `jurusan`, `kelas`, `uang_kas`) VALUES
('10001', 'Alif Hanan', 'Muncar', 'L', 'RPL', 'XII', 5000),
('10002', 'Minawati Sulistia', 'Purwoharjo', 'P', 'RPL', 'XII', 5000),
('10003', 'Citra Hadi Rozikin', 'Banyuwangi', 'P', 'RPL', 'XII', 10000),
('10004', 'Wanda Putri', 'Srono', 'P', 'APK', 'XII', 5000),
('10005', 'Yunita Nurjanah', 'Purwoharjo', 'P', 'APK', 'XII', 5000),
('10006', 'Yuyun Suci Anggarista', 'Genteng', 'P', 'APK', 'XII', 0),
('11001', 'Rusdiana', 'Banyuwangi', 'P', 'RPL', 'XI', 10000),
('11002', 'Maulidina Wati', 'Banyuwangi', 'P', 'RPL', 'XI', 10000),
('11003', 'Ahmad Ruslan', 'Wongsorejo', 'L', 'RPL', 'XI', 5000),
('11004', 'Lutfi Hasan', 'Banyuwangi', 'L', 'PM', 'XI', 10000),
('11005', 'Malik Ibrahin', 'Banyuwangi', 'L', 'PM', 'XI', 10000),
('11006', 'Maulana Indra', 'Muncar', 'L', 'PM', 'XI', 5000),
('12001', 'Ni Nyoman Sukma Yanuarti', 'Gilimanuk', 'P', 'RPL', 'X', 5000),
('12002', 'Axcel Bramono', 'Banyuwangi', 'L', 'RPL', 'X', 10000),
('12003', 'Jhonatan Putra', 'Genteng', 'L', 'RPL', 'X', 0),
('12004', 'Nanda Nirmala', 'Banyuwangi', 'P', 'APH', 'X', 10000),
('12005', 'Muslimah', 'Banyuwangi', 'P', 'APH', 'X', 10000),
('12006', 'Ina Pratiwi', 'Genteng', 'P', 'APH', 'X', 0);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `buku`
--
ALTER TABLE `buku`
 ADD PRIMARY KEY (`kode_buku`);

--
-- Indexes for table `peminjaman`
--
ALTER TABLE `peminjaman`
 ADD PRIMARY KEY (`id_pinjam`);

--
-- Indexes for table `siswa`
--
ALTER TABLE `siswa`
 ADD PRIMARY KEY (`nis`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `peminjaman`
--
ALTER TABLE `peminjaman`
MODIFY `id_pinjam` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=11;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
