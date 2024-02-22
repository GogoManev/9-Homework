def gas_station(distance, tank_size, stations):
    revr_dist = tank_size
    recharge = []
    for i in len(stations):
        if revr_dist < stations[i]:
            recharge[i] = stations[i-1]
            revr_dist += tank_size

    return recharge


print(gas_station(320, 90, [50, 80, 140, 180, 220, 290]))
