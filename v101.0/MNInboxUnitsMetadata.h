/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNInboxUnitsMetadata : FBValueObject <NSCopying> {

	NSArray* _orderedUnitIds;

}

@property (nonatomic,copy,readonly) NSArray * orderedUnitIds;              //@synthesize orderedUnitIds=_orderedUnitIds - In the implementation block
-(NSArray *)orderedUnitIds;
-(id)initWithOrderedUnitIds:(id)arg1 ;
@end

