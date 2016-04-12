//
//  StartAnnotation.h
//  waiqintong
//
//  Created by ChenBinbin on 11/11/15.
//  Copyright © 2015 cnbin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StartAnnotation : MAPointAnnotation
/*!
 @brief 标注对应的annotation
 */
@property (nonatomic, strong) MAPointAnnotation *annotation;

@end
