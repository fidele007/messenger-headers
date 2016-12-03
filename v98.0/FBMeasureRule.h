/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSValue;

@interface FBMeasureRule : NSObject {

	NSString* _valueType;
	id _valueObject;
	NSValue* _value;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSValue * value;              //@synthesize value=_value - In the implementation block
+(id)ruleForSize:(CGSize)arg1 CGFloat:(double)arg2 ;
+(id)ruleForSize:(CGSize)arg1 CGSize:(CGSize)arg2 ;
+(id)ruleForSize:(CGSize)arg1 UIEdgeInsets:(UIEdgeInsets)arg2 ;
+(id)ruleForSize:(CGSize)arg1 integer:(long long)arg2 ;
+(id)ruleForSize:(CGSize)arg1 CGPoint:(CGPoint)arg2 ;
+(id)ruleForSize:(CGSize)arg1 CGRect:(CGRect)arg2 ;
+(id)ruleForSize:(CGSize)arg1 image:(id)arg2 ;
+(id)ruleForSize:(CGSize)arg1 value:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 value:(id)arg2 valueType:(id)arg3 ;
-(id)initWithSize:(CGSize)arg1 object:(id)arg2 valueType:(id)arg3 ;
-(CGSize)size;
-(NSValue *)value;
-(id)valueType;
@end

