/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface MNBatchThreadMessagingDataFilter : FBValueObject <NSCopying> {

	NSSet* _singleThreadMessagingDataFilters;

}

@property (nonatomic,copy,readonly) NSSet * singleThreadMessagingDataFilters;              //@synthesize singleThreadMessagingDataFilters=_singleThreadMessagingDataFilters - In the implementation block
-(NSSet *)singleThreadMessagingDataFilters;
-(id)initWithSingleThreadMessagingDataFilters:(id)arg1 ;
@end

