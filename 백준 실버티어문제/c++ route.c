double route(double a) {
	for (double i = 0; i <= 100; i+=1.0) {
		if (i * i == a) {
			return i;
		}
		else if (a < (i + 1.0) * (i + 1.0)) {

			for (double j = 0.1; j < 1; j += 0.1) {
				if (a < (i + (j + 0.1)) * (i + (j + 0.1))) {

					for (double k = 0.01; k < 0.1; k+=0.01) { //0.01
						if (a < (i + j + (k + 0.01)) * (i + j + (k + 0.01))) {

							for (double L = 0.001; L < 0.01; L+=0.001) {  // 0.001
								if (a < (i+j+k+(L + 0.001)) * (i+j+k+(L + 0.001)) ) {

									for (double m = 0.0001; m < 0.001; m += 0.0001) {  // 0.0001
										if (a < (i + j + k + L + (m + 0.0001)) * (i + j + k + L + (m + 0.0001))) {

											for (double n = 0.00001; n < 0.0001; n += 0.00001) {  // 0.00001
												if (a < (i + j + k + L + m + (n+0.00001)) * (i + j + k + L + m + (n + 0.00001))) {

													for (double o = 0.000001; o < 0.0001; o += 0.000001) {  // 0.000001
														if (a < (i + j + k + L + m + n + (o+0.000001)) * (i + j + k + L + m + n + (o + 0.000001))) {
															return i + j + k + L + m + n + o;
														}
													}
												}
											}
										}
									}

								}
							}

						}
					}
				}
			}
		}
	}
}