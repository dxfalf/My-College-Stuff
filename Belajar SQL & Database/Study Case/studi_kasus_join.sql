-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 16, 2026 at 02:30 AM
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
-- Database: `studi kasus join`
--

-- --------------------------------------------------------

--
-- Table structure for table `detail pesanan`
--

CREATE TABLE `detail pesanan` (
  `ID` int(10) NOT NULL,
  `ID_Pesanan` int(10) DEFAULT NULL,
  `ID_Produk` int(10) DEFAULT NULL,
  `Jumlah` int(10) DEFAULT NULL,
  `Harga_Satuan` int(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `detail pesanan`
--

INSERT INTO `detail pesanan` (`ID`, `ID_Pesanan`, `ID_Produk`, `Jumlah`, `Harga_Satuan`) VALUES
(1, 1, 1, 1, 8500000),
(2, 1, 4, 1, 250000),
(3, 2, 2, 2, 250000),
(4, 3, 3, 1, 1200000),
(5, 4, NULL, 1, NULL),
(6, 5, 2, NULL, 250000);

-- --------------------------------------------------------

--
-- Table structure for table `pelanggan`
--

CREATE TABLE `pelanggan` (
  `ID` int(10) NOT NULL,
  `Nama` varchar(100) DEFAULT NULL,
  `Email` varchar(100) DEFAULT NULL,
  `Kota` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `pelanggan`
--

INSERT INTO `pelanggan` (`ID`, `Nama`, `Email`, `Kota`) VALUES
(1, 'Andi Pratama', 'andi@gmail.com', 'Surabaya'),
(2, 'Budi Santoso', 'budi@gmail.com', 'Malang'),
(3, 'Citra Lestari', 'citra@gmail.com', 'Jakarta'),
(4, 'Deni Saputra', 'deni@gmail.com', 'Bandung'),
(5, 'Eka Wijaya', 'eka@gmail.com', 'Yogyakarta');

-- --------------------------------------------------------

--
-- Table structure for table `pesanan`
--

CREATE TABLE `pesanan` (
  `ID` int(10) NOT NULL,
  `ID_Pelanggan` int(10) DEFAULT NULL,
  `Tanggal` varchar(50) DEFAULT NULL,
  `Total` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `pesanan`
--

INSERT INTO `pesanan` (`ID`, `ID_Pelanggan`, `Tanggal`, `Total`) VALUES
(1, 1, '2026-06-01', '8750000'),
(2, 2, '2026-06-03', '500000'),
(3, 4, '2026-06-05', '1200000'),
(4, NULL, '2026-06-07', '750000'),
(5, 1, NULL, '250000');

-- --------------------------------------------------------

--
-- Table structure for table `produk`
--

CREATE TABLE `produk` (
  `ID` int(10) NOT NULL,
  `Nama` varchar(100) DEFAULT NULL,
  `Kategori` varchar(100) DEFAULT NULL,
  `Harga` int(100) DEFAULT NULL,
  `Stok` int(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `produk`
--

INSERT INTO `produk` (`ID`, `Nama`, `Kategori`, `Harga`, `Stok`) VALUES
(1, 'Laptop ASUS', 'Elektronik', 8500000, 10),
(2, 'Mouse Logitech', 'Elektronik', 250000, 50),
(3, 'Meja Belajar', 'Furniture', 1200000, 15),
(4, 'Keyboard Mechanical', 'Elektronik', 750000, 30),
(5, 'Printer Epson', 'Elektronik', 2500000, 8),
(6, 'Kursi Gaming', 'Furniture', 3000000, 5);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `detail pesanan`
--
ALTER TABLE `detail pesanan`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `ID_Pesanan` (`ID_Pesanan`),
  ADD KEY `ID_Produk` (`ID_Produk`);

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
  ADD KEY `ID_Pelanggan` (`ID_Pelanggan`);

--
-- Indexes for table `produk`
--
ALTER TABLE `produk`
  ADD PRIMARY KEY (`ID`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `detail pesanan`
--
ALTER TABLE `detail pesanan`
  ADD CONSTRAINT `detail pesanan_ibfk_1` FOREIGN KEY (`ID_Pesanan`) REFERENCES `pesanan` (`ID`),
  ADD CONSTRAINT `detail pesanan_ibfk_2` FOREIGN KEY (`ID_Produk`) REFERENCES `produk` (`ID`);

--
-- Constraints for table `pesanan`
--
ALTER TABLE `pesanan`
  ADD CONSTRAINT `pesanan_ibfk_1` FOREIGN KEY (`ID_Pelanggan`) REFERENCES `pelanggan` (`ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
