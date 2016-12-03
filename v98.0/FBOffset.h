/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBOffset : NSObject <NSCopying> {

	unsigned long long _units;
	double _rawValue;
	unsigned long long _offsetOperator;

}

@property (assign,nonatomic) double rawValue;                                //@synthesize rawValue=_rawValue - In the implementation block
@property (assign,nonatomic) unsigned long long offsetOperator;              //@synthesize offsetOperator=_offsetOperator - In the implementation block
@property (assign,nonatomic) unsigned long long units;                       //@synthesize units=_units - In the implementation block
@property (nonatomic,readonly) double amount; 
+(double)_multiplierForOperator:(unsigned long long)arg1 ;
+(unsigned long long)_operatorFromString:(id)arg1 ;
+(unsigned long long)_unitsFromString:(id)arg1 ;
+(id)offsetWithAmount:(double)arg1 operator:(id)arg2 units:(id)arg3 ;
-(void)setRawValue:(double)arg1 ;
-(unsigned long long)offsetOperator;
-(void)setOffsetOperator:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)amount;
-(double)rawValue;
-(void)setUnits:(unsigned long long)arg1 ;
-(unsigned long long)units;
@end

