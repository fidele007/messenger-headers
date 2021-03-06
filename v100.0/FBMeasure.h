/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray, UIImage;

@interface FBMeasure : NSObject {

	unsigned long long _rounding;
	unsigned long long _scaleInducer;
	unsigned long long _measureType;
	NSArray* _sortedDecomposedRules;
	/*^block*/id _screenSizeBlock;

}

@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) double CGFloatValue; 
@property (nonatomic,readonly) CGSize CGSizeValue; 
@property (nonatomic,readonly) CGPoint CGPointValue; 
@property (nonatomic,readonly) CGRect CGRectValue; 
@property (nonatomic,readonly) UIEdgeInsets UIEdgeInsetsValue; 
@property (nonatomic,readonly) UIImage * UIImageValue; 
+(id)measureWithScaleInducer:(unsigned long long)arg1 rounding:(unsigned long long)arg2 rules:(id)arg3 ;
+(id)measureBySnappingToRules:(id)arg1 ;
-(id)initWithScaleInducer:(unsigned long long)arg1 rounding:(unsigned long long)arg2 rules:(id)arg3 screenSizeBlock:(/*^block*/id)arg4 ;
-(id)_decomposeRules:(id)arg1 ;
-(/*^block*/id)_valueComponentMappingForDecomposedRule:(id)arg1 screenValue:(double)arg2 screenSize:(CGSize)arg3 ruleIndex:(long long)arg4 ;
-(id)_extrapolatedValueForStartRule:(id)arg1 endRule:(id)arg2 screenValue:(double)arg3 componentIndex:(long long)arg4 ;
-(id)_interpolateValueForStartRule:(id)arg1 endRule:(id)arg2 screenValue:(double)arg3 componentIndex:(long long)arg4 ;
-(id)_scaledAndRoundedValueComponentsForScreenSize:(CGSize)arg1 ;
-(UIImage *)UIImageValue;
-(long long)integerValue;
-(CGRect)CGRectValue;
-(id)value;
-(CGSize)CGSizeValue;
-(CGPoint)CGPointValue;
-(UIEdgeInsets)UIEdgeInsetsValue;
-(double)CGFloatValue;
@end

