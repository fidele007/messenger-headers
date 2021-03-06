/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBIntermediatePositionDescriptor : NSObject <NSCopying> {

	NSString* _anchor;
	NSString* _comparator;
	NSString* _dependentElementID;
	NSString* _dependentAnchor;
	double _offset;
	NSString* _offsetOperator;
	NSString* _offsetUnits;

}

@property (nonatomic,copy) NSString * anchor;                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * comparator;                      //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,copy) NSString * dependentElementID;              //@synthesize dependentElementID=_dependentElementID - In the implementation block
@property (nonatomic,copy) NSString * dependentAnchor;                 //@synthesize dependentAnchor=_dependentAnchor - In the implementation block
@property (assign,nonatomic) double offset;                            //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) NSString * offsetOperator;                  //@synthesize offsetOperator=_offsetOperator - In the implementation block
@property (nonatomic,copy) NSString * offsetUnits;                     //@synthesize offsetUnits=_offsetUnits - In the implementation block
-(NSString *)dependentElementID;
-(NSString *)dependentAnchor;
-(NSString *)offsetOperator;
-(NSString *)offsetUnits;
-(void)setDependentElementID:(NSString *)arg1 ;
-(void)setDependentAnchor:(NSString *)arg1 ;
-(void)setOffsetOperator:(NSString *)arg1 ;
-(void)setOffsetUnits:(NSString *)arg1 ;
-(NSString *)comparator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setComparator:(NSString *)arg1 ;
@end

