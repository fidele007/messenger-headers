/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBGraphQLDownloadRequest.h>

@interface FBSearchKeywordBootstrapDownloadRequest : FBGraphQLDownloadRequest {

	unsigned long long _maxResultCount;

}

@property (nonatomic,readonly) unsigned long long maxResultCount;              //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(id)initWithUserID:(id)arg1 maxResultCount:(unsigned long long)arg2 callbackPerformer:(id)arg3 ;
-(unsigned long long)maxResultCount;
-(id)newQuery;
@end

