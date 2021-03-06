/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBUpdateDataFetcherParams : FBValueObject <NSCopying> {

	BOOL _filterResultsForOtherBundleIds;
	NSString* _appId;
	NSString* _bundleId;
	NSString* _releaseChannel;
	unsigned long long _limit;

}

@property (nonatomic,copy,readonly) NSString * appId;                            //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleId;                         //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * releaseChannel;                   //@synthesize releaseChannel=_releaseChannel - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL filterResultsForOtherBundleIds;              //@synthesize filterResultsForOtherBundleIds=_filterResultsForOtherBundleIds - In the implementation block
-(id)initWithAppId:(id)arg1 bundleId:(id)arg2 releaseChannel:(id)arg3 limit:(unsigned long long)arg4 filterResultsForOtherBundleIds:(BOOL)arg5 ;
-(NSString *)releaseChannel;
-(BOOL)filterResultsForOtherBundleIds;
-(NSString *)bundleId;
-(NSString *)appId;
-(unsigned long long)limit;
@end

