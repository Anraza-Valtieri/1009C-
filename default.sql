-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Apr 02, 2017 at 08:32 AM
-- Server version: 10.1.16-MariaDB
-- PHP Version: 5.6.24

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `1009`
--

-- --------------------------------------------------------

--
-- Table structure for table `quiz`
--

Drop table `quiz`;

CREATE TABLE `quiz` (
  `quiz_id` int(11) NOT NULL,
  `quizname` longtext NOT NULL COMMENT 'Name for the quiz',
  `question_id` longtext NOT NULL COMMENT 'All the question IDs',
  `subject` longtext NOT NULL COMMENT 'question subject'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Truncate table before insert `quiz`
--

TRUNCATE TABLE `quiz`;
--
-- Dumping data for table `quiz`
--

INSERT INTO `quiz` (`quiz_id`, `quizname`, `question_id`, `subject`) VALUES
(1, 'Java', '1,2,3,4,5,8', 'Java'),
(2, 'Java OOP', '6,7,9', 'Java OOP');

-- --------------------------------------------------------

--
-- Table structure for table `quiz_questions`
--

drop table `quiz_questions`;

CREATE TABLE `quiz_questions` (
  `question_id` int(255) NOT NULL COMMENT 'Primary Key For Questions',
  `teacher_id` longtext COMMENT 'To know which teacher created the question',
  `subject` longtext COMMENT 'Subject for the question',
  `question_text` longtext NOT NULL COMMENT 'The Question',
  `question_type` int(1) NOT NULL DEFAULT '0' COMMENT 'MCQ - 0 T/F - 1 SA - 2',
  `data1` longtext COMMENT 'MCQ Question/T&F/SA',
  `data2` longtext COMMENT 'MCQ Question/T&F',
  `data3` longtext COMMENT 'MCQ Question',
  `data4` longtext COMMENT 'MCQ Question',
  `data5` longtext COMMENT 'MCQ Answer',
  `marks` double DEFAULT NULL COMMENT 'Marks'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Truncate table before insert `quiz_questions`
--

TRUNCATE TABLE `quiz_questions`;
--
-- Dumping data for table `quiz_questions`
--

INSERT INTO `quiz_questions` (`question_id`, `teacher_id`, `subject`, `question_text`, `question_type`, `data1`, `data2`, `data3`, `data4`, `data5`, `marks`) VALUES
(1, 'lecturer', 'Java', 'Question1', 0, '1', '2', '3', '4', '2', 1),
(2, 'lecturer', 'Java', 'Question2', 0, '3', '4', '1', '2', '3', 1),
(3, 'lecturer', 'Java', 'TRUE', 1, 'TRUE', 'FALSE', NULL, NULL, '2', 1),
(4, 'lecturer', 'Java', 'TRU', 1, 'TRU', 'FORCE', NULL, NULL, '2', 1),
(5, 'lecturer', 'Java', 'TROO', 1, 'TROO', 'HORSE', NULL, NULL, '1', 1),
(6, 'lecturer', 'Java OOP', 'TRU?!', 1, 'TRU?!', 'PHOLS?!', NULL, NULL, '1', 1),
(7, 'lecturer', 'Java OOP', 'What do you feel about the weather today?', 2, 'What do you feel about the weather today?', NULL, NULL, NULL, 'I,Feel,Weather,Today,Nice', 2),
(8, 'lecturer', 'Java', 'Honestly, what do you really feel about the weather today?', 2, 'Honestly, what do you really feel about the weather today?', NULL, NULL, NULL, 'I,Feel,Weather,Today,Very,Nice', 2),
(9, 'lecturer', 'Java OOP', '?!?!?!??!', 1, '?!?!?!??!', '!?!?!?!?!?', NULL, NULL, '2', 1);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `quiz`
--
ALTER TABLE `quiz`
  ADD PRIMARY KEY (`quiz_id`),
  ADD UNIQUE KEY `quiz_id` (`quiz_id`);

--
-- Indexes for table `quiz_questions`
--
ALTER TABLE `quiz_questions`
  ADD PRIMARY KEY (`question_id`),
  ADD UNIQUE KEY `question_id` (`question_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `quiz`
--
ALTER TABLE `quiz`
  MODIFY `quiz_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `quiz_questions`
--
ALTER TABLE `quiz_questions`
  MODIFY `question_id` int(255) NOT NULL AUTO_INCREMENT COMMENT 'Primary Key For Questions', AUTO_INCREMENT=10;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
