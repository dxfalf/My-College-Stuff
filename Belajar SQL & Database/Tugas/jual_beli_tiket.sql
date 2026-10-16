-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 16, 2026 at 02:34 AM
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
-- Database: `jual beli tiket`
--

-- --------------------------------------------------------

--
-- Table structure for table `detail_pesanan`
--

CREATE TABLE `detail_pesanan` (
  `ID` int(10) NOT NULL,
  `ID_Tiket` int(10) DEFAULT NULL,
  `ID_Pesanan` int(10) DEFAULT NULL,
  `Tanggal_Pembayaran` date DEFAULT NULL,
  `Total_Pembayaran` int(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `detail_pesanan`
--

INSERT INTO `detail_pesanan` (`ID`, `ID_Tiket`, `ID_Pesanan`, `Tanggal_Pembayaran`, `Total_Pembayaran`) VALUES
(1, 2, 1, '2026-07-08', 220000000),
(2, 3, 4, '2028-06-20', 10000000),
(3, 4, 3, '2027-01-10', 261300000),
(4, 5, 5, '2026-07-07', 1900000000),
(5, 1, 2, '2026-07-06', 285600000);

-- --------------------------------------------------------

--
-- Table structure for table `event`
--

CREATE TABLE `event` (
  `ID` int(10) NOT NULL,
  `Nama_Event` varchar(100) DEFAULT NULL,
  `Penyelenggara` varchar(50) DEFAULT NULL,
  `Nomor` varchar(100) DEFAULT NULL,
  `Tanggal` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `event`
--

INSERT INTO `event` (`ID`, `Nama_Event`, `Penyelenggara`, `Nomor`, `Tanggal`) VALUES
(1, 'A Matter of Time Tour', 'Laufey', '08195757293', '2026-09-15'),
(2, 'Buzz World Tour', 'NIKI', '086437290223', '2027-02-16'),
(3, 'The Eras Tour', 'Taylor Swift', '082615282903', '2027-03-18'),
(4, 'Motion Ime', 'Andika', '08155612971', '2030-07-26'),
(5, 'Penjagalan Masal Dika', 'Andika', '08155612971', '2026-07-07');

-- --------------------------------------------------------

--
-- Table structure for table `pesanan`
--

CREATE TABLE `pesanan` (
  `ID` int(10) NOT NULL,
  `Kategori` varchar(100) DEFAULT NULL,
  `Jumlah` int(100) DEFAULT NULL,
  `Total_Pembayaran` int(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `pesanan`
--

INSERT INTO `pesanan` (`ID`, `Kategori`, `Jumlah`, `Total_Pembayaran`) VALUES
(1, 'Konser', 100, 220000000),
(2, 'Konser', 70, 285600000),
(3, 'Konser', 67, 261300000),
(4, 'Cosplay', 100, 10000000),
(5, 'Hardcore', 100, 1900000000);

-- --------------------------------------------------------

--
-- Table structure for table `tiket`
--

CREATE TABLE `tiket` (
  `ID` int(10) NOT NULL,
  `ID_Event` int(10) DEFAULT NULL,
  `Kategori` varchar(100) DEFAULT NULL,
  `Tanggal` date DEFAULT NULL,
  `Harga` int(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tiket`
--

INSERT INTO `tiket` (`ID`, `ID_Event`, `Kategori`, `Tanggal`, `Harga`) VALUES
(1, 2, 'Konser', '2026-07-08', 4080000),
(2, 1, 'Konser', '2026-07-10', 2200000),
(3, 4, 'Cosplay', '2028-08-10', 100000),
(4, 3, 'Konser', '2027-01-27', 3900000),
(5, 5, 'Hardcore', '2026-07-07', 19000000);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `detail_pesanan`
--
ALTER TABLE `detail_pesanan`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `ID_Tiket` (`ID_Tiket`),
  ADD KEY `ID_Pesanan` (`ID_Pesanan`);

--
-- Indexes for table `event`
--
ALTER TABLE `event`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `pesanan`
--
ALTER TABLE `pesanan`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `tiket`
--
ALTER TABLE `tiket`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `ID_Event` (`ID_Event`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `detail_pesanan`
--
ALTER TABLE `detail_pesanan`
  ADD CONSTRAINT `detail_pesanan_ibfk_1` FOREIGN KEY (`ID_Tiket`) REFERENCES `tiket` (`ID`),
  ADD CONSTRAINT `detail_pesanan_ibfk_2` FOREIGN KEY (`ID_Pesanan`) REFERENCES `pesanan` (`ID`);

--
-- Constraints for table `tiket`
--
ALTER TABLE `tiket`
  ADD CONSTRAINT `tiket_ibfk_1` FOREIGN KEY (`ID_Event`) REFERENCES `event` (`ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
