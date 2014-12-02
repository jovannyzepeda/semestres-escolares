-- MySQL Script generated by MySQL Workbench
-- mié 24 sep 2014 09:59:49 CDT
-- Model: New Model    Version: 1.0
SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`usuarios`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`usuarios` (
  `idusuarios` INT NOT NULL AUTO_INCREMENT,
  `nombre_usuario` VARCHAR(45) NOT NULL,
  `password_usuario` VARCHAR(45) NOT NULL,
  `direccion` VARCHAR(45) NULL,
  `telefono` VARCHAR(45) NULL,
  PRIMARY KEY (`idusuarios`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Productos`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Productos` (
  `idProductos` INT NOT NULL AUTO_INCREMENT,
  `nombre_producto` VARCHAR(45) NULL,
  `precio` DOUBLE NULL,
  PRIMARY KEY (`idProductos`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`pedido`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`pedido` (
  `idpedido` INT NOT NULL AUTO_INCREMENT,
  `cantidad_producto` INT NOT NULL,
  `idusuarios` INT NOT NULL,
  `idProductos` INT NOT NULL,
  PRIMARY KEY (`idpedido`),
  INDEX `fk_pedido_usuarios_idx` (`idusuarios` ASC),
  INDEX `fk_pedido_Productos1_idx` (`idProductos` ASC),
  CONSTRAINT `fk_pedido_usuarios`
    FOREIGN KEY (`idusuarios`)
    REFERENCES `mydb`.`usuarios` (`idusuarios`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_pedido_Productos1`
    FOREIGN KEY (`idProductos`)
    REFERENCES `mydb`.`Productos` (`idProductos`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`factura`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`factura` (
  `idfactura` INT NOT NULL AUTO_INCREMENT,
  `total_pagar` DOUBLE NULL,
  `idpedido` INT NOT NULL,
  PRIMARY KEY (`idfactura`),
  INDEX `fk_factura_pedido1_idx` (`idpedido` ASC),
  CONSTRAINT `fk_factura_pedido1`
    FOREIGN KEY (`idpedido`)
    REFERENCES `mydb`.`pedido` (`idpedido`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
