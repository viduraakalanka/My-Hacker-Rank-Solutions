DELIMITER $$

CREATE PROCEDURE print_stars (IN row_cnt INTEGER) BEGIN 
    DECLARE dec_val INTEGER;
    DECLARE star_cnt INTEGER;
    SET dec_val = row_cnt;

    WHILE dec_val > 0 DO
        set star_cnt = row_cnt - dec_val +1; 
        SELECT REPEAT('* ', star_cnt);
        SET dec_val = dec_val - 1 ;
    END WHILE;
END $$
DELIMITER ;
CALL print_stars(20);
