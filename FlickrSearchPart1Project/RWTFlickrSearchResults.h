//
//  Created by Cc on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

@import Foundation;

@interface RWTFlickrSearchResults : NSObject

@property (strong, nonatomic) NSString *searchString;
@property (strong, nonatomic) NSArray *photos;
@property (nonatomic) NSUInteger totalResults;

@end
