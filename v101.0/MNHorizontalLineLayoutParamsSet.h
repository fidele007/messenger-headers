/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface MNHorizontalLineLayoutParamsSet : FBValueObject <NSCopying> {

	NSArray* _sectionsFrames;
	NSArray* _itemsPositions;
	NSDictionary* _itemsPositionsByIndexPath;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize contentSize;                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionsFrames;                              //@synthesize sectionsFrames=_sectionsFrames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemsPositions;                              //@synthesize itemsPositions=_itemsPositions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemsPositionsByIndexPath;              //@synthesize itemsPositionsByIndexPath=_itemsPositionsByIndexPath - In the implementation block
-(NSArray *)itemsPositions;
-(NSArray *)sectionsFrames;
-(NSDictionary *)itemsPositionsByIndexPath;
-(id)initWithContentSize:(CGSize)arg1 sectionsFrames:(id)arg2 itemsPositions:(id)arg3 itemsPositionsByIndexPath:(id)arg4 ;
-(CGSize)contentSize;
@end

