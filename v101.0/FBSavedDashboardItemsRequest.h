/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLPagedDownloadRequest.h>

@class NSString;

@interface FBSavedDashboardItemsRequest : FBGraphQLPagedDownloadRequest {

	unsigned long long _fetchLimit;
	NSString* _section;

}

@property (nonatomic,copy) NSString * section;              //@synthesize section=_section - In the implementation block
-(id)newQueryWithCursor:(id)arg1 ;
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 section:(id)arg3 fetchLimit:(unsigned long long)arg4 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
@end
