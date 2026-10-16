-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 16, 2026 at 02:33 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `studi kasus e-commerce`
--

-- --------------------------------------------------------

--
-- Table structure for table `pelanggan`
--

CREATE TABLE `pelanggan` (
  `ID` int(10) NOT NULL,
  `Nama` varchar(100) DEFAULT NULL,
  `Kota` varchar(20) DEFAULT NULL,
  `Email` varchar(100) DEFAULT NULL,
  `Telepon` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `pelanggan`
--

INSERT INTO `pelanggan` (`ID`, `Nama`, `Kota`, `Email`, `Telepon`) VALUES
(1, 'Mas Galih', 'Kediri', 'galihsukambg@gmail.com', '085629360475'),
(2, 'Nanik', 'Purwoasri', 'nnksdrytdyg1@gmail.com', '082456770265'),
(3, 'Subianto', 'Jakarta', 'prbwsbnt19@gmail.com', '084592679836'),
(4, 'Teddy', 'Manado', 'tdindrwjy19@gmail.com', '081561874312'),
(5, 'Sule Prikitiw', 'Jakarta', 'sleprktw22@gmail.com', '082575392764'),
(6, 'Natalius Pigai', 'Papua', 'ntlpgi@gmail.com', '087557382781'),
(7, 'Timothy', 'Jakarta', 'tmthyrnld@gmail.com', '087627482037'),
(8, 'Dadan', 'Garut', 'ddnhndyn19@gmail.com', '087362930283'),
(9, 'Sambo', 'Surabaya', 'frdysmb1@gmail.com', '086545782622'),
(10, 'Pria Solo', 'Solo', 'ytta12@gmail.com', '087262382974');

-- --------------------------------------------------------

--
-- Table structure for table `pesanan`
--

CREATE TABLE `pesanan` (
  `ID` int(10) NOT NULL,
  `ID_pelanggan` int(10) DEFAULT NULL,
  `ID_produk` int(10) DEFAULT NULL,
  `jumlah_barang` int(255) DEFAULT NULL,
  `Total` int(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `pesanan`
--

INSERT INTO `pesanan` (`ID`, `ID_pelanggan`, `ID_produk`, `jumlah_barang`, `Total`) VALUES
(1, 9, 3, 2, 1800000),
(2, 5, 4, 19, 342000),
(3, 7, 6, 2, 54000000),
(4, 4, 1, 5, 95000000),
(5, 1, 10, 1, 50000000),
(6, 3, 8, 17000, 1700000000),
(7, 10, 9, 99, 98999901),
(8, 2, 2, 1, 100000),
(9, 6, 5, 2, 4000000),
(10, 8, 7, 1, 2147483647);

-- --------------------------------------------------------

--
-- Table structure for table `produk`
--

CREATE TABLE `produk` (
  `ID` int(10) NOT NULL,
  `Nama` varchar(100) DEFAULT NULL,
  `Kategori` varchar(50) DEFAULT NULL,
  `Stok` int(255) DEFAULT NULL,
  `Harga` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `produk`
--

INSERT INTO `produk` (`ID`, `Nama`, `Kategori`, `Stok`, `Harga`) VALUES
(1, 'Laptop', 'Elektronik', 10, '19000000'),
(2, 'Three Days of Happiness', 'Buku', 1, '100000'),
(3, 'Cthulhu Myth', 'Buku', 19, '900000'),
(4, 'Ayo Kita Komunis', 'Buku', 19, '18000'),
(5, 'SmartTV', 'Elektronik', 2, '2000000'),
(6, 'Handphone', 'Elektronik', 5, '27000000'),
(7, 'Antimateri', 'Material', 1, '990000000000000000000'),
(8, 'Kaos Kaki MBG', 'Barang Dewasa', 17000, '100000'),
(9, 'Kursi Ukir Jepara', 'Furnitur', 999, '999999'),
(10, 'Armor Full Body', 'Alat Perang', 1, '50000000');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `pelanggan`
--
ALTER TABLE `pelanggan`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `pesanan`
--
ALTER TABLE `pesanan`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `ID_pelanggan` (`ID_pelanggan`),
  ADD KEY `ID_produk` (`ID_produk`);

--
-- Indexes for table `produk`
--
ALTER TABLE `produk`
  ADD PRIMARY KEY (`ID`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `pesanan`
--
ALTER TABLE `pesanan`
  ADD CONSTRAINT `pesanan_ibfk_1` FOREIGN KEY (`ID_pelanggan`) REFERENCES `pelanggan` (`ID`),
  ADD CONSTRAINT `pesanan_ibfk_2` FOREIGN KEY (`ID_produk`) REFERENCES `produk` (`ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
