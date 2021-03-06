/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary;

@interface MNViewModelUpdateType : NSObject <NSCopying> {

	unsigned long long _subtype;
	id _reload_existingViewModel;
	id _additionalPage_existingViewModel;
	long long _additionalPage_numberOfAdditionalElementsToRequest;
	id _reloadWithAdditionalPage_existingViewModel;
	long long _reloadWithAdditionalPage_numberOfAdditionalElementsToRequest;
	id _incremental_existingViewModel;
	NSSet* _incremental_keysToUpdate;
	NSDictionary* _incremental_cachedChildElements;

}
+(id)additionalPageWithExistingViewModel:(id)arg1 numberOfAdditionalElementsToRequest:(long long)arg2 ;
+(id)incrementalWithExistingViewModel:(id)arg1 keysToUpdate:(id)arg2 cachedChildElements:(id)arg3 ;
+(id)reloadWithAdditionalPageWithExistingViewModel:(id)arg1 numberOfAdditionalElementsToRequest:(long long)arg2 ;
+(id)reloadWithExistingViewModel:(id)arg1 ;
-(void)matchReload:(/*^block*/id)arg1 additionalPage:(/*^block*/id)arg2 reloadWithAdditionalPage:(/*^block*/id)arg3 incremental:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

