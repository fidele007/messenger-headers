/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/MNMessageCellLayoutElement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMessageCellBlockViewLayoutElement : FBValueObject <MNMessageCellLayoutElement, NSCopying> {

	double _height;
	double _leftMargin;
	double _rightMargin;
	unsigned long long _elementCategory;
	NSString* _elementKind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) double leftMargin;                               //@synthesize leftMargin=_leftMargin - In the implementation block
@property (nonatomic,readonly) double rightMargin;                              //@synthesize rightMargin=_rightMargin - In the implementation block
@property (nonatomic,readonly) unsigned long long elementCategory;              //@synthesize elementCategory=_elementCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementKind;                     //@synthesize elementKind=_elementKind - In the implementation block
+(id)newWithHeight:(double)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 elementCategory:(unsigned long long)arg4 elementKind:(id)arg5 ;
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithHeight:(double)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 elementCategory:(unsigned long long)arg4 elementKind:(id)arg5 ;
-(unsigned long long)elementCategory;
-(double)height;
-(double)rightMargin;
-(NSString *)elementKind;
-(void)acceptVisitor:(id)arg1 ;
-(double)leftMargin;
@end
