all:
	@make -C mandatory

bonus:
	@make -C bonus

clean:
	@make clean -C mandatory
	@make clean -C bonus

fclean:	clean
	@make fclean -C mandatory
	@make fclean -C bonus

re: fclean all bonus

.PHONY: all clean fclean re bonus