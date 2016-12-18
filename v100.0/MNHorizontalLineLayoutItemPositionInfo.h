/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath;

@interface MNHorizontalLineLayoutItemPositionInfo : FBValueObject <NSCopying> {

	NSIndexPath* _indexPath;
	CGRect _frame;

}

@property (nonatomic,copy,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) CGRect frame;                              //@synthesize frame=_frame - In the implementation block
-(id)initWithIndexPath:(id)arg1 frame:(CGRect)arg2 ;
-(CGRect)frame;
-(NSIndexPath *)indexPath;
@end
