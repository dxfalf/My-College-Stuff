-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 16, 2026 at 02:35 AM
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
-- Database: `studi kasus techstore`
--

-- --------------------------------------------------------

--
-- Table structure for table `produk`
--

CREATE TABLE `produk` (
  `ID_Produk` int(10) NOT NULL,
  `Nama_Produk` varchar(100) DEFAULT NULL,
  `Kategori` varchar(50) DEFAULT NULL,
  `Harga` int(100) DEFAULT NULL,
  `Stok` int(100) DEFAULT NULL,
  `Jumlah_Terjual` int(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `produk`
--

INSERT INTO `produk` (`ID_Produk`, `Nama_Produk`, `Kategori`, `Harga`, `Stok`, `Jumlah_Terjual`) VALUES
(1, 'Laptop ASUS', 'Elektronik', 8500000, 15, 50),
(2, 'Mouse Logitech', 'Elektronik', 250000, 80, 120),
(3, 'Meja Belajar', 'Furniture', 1200000, 20, 30),
(4, 'Kursi Gaming', 'Furniture', 2500000, 10, 25),
(5, 'Keyboard Mechanical', 'Elektronik', 750000, 50, 75),
(6, 'Lampu LED', 'Peralatan Rumah', 100000, 150, 200),
(7, 'Blender', 'Peralatan Rumah', 450000, 30, 60),
(8, 'Smartphone Samsung', 'Elektronik', 5000000, 25, 90),
(9, 'Rak Buku', 'Furniture', 700000, 18, 40),
(10, 'Kipas Angin', 'Peralatan Rumah', 350000, 40, 100);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `produk`
--
ALTER TABLE `produk`
  ADD PRIMARY KEY (`ID_Produk`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
