//
//  config.h
//  WorldHours
//
//  Created by Daniele Salatti on 15/03/11.
//  Copyright 2011 Daniele Salatti. All rights reserved.
//


//
// Check whether it's an iPhone/iPod or an iPad
//
#define DEVICE_IS_IPAD ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define DEVICE_IS_IPHONE !([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)