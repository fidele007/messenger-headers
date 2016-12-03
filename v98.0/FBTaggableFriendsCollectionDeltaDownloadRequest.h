/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLDownloadRequest.h>
#import <Messenger/FBTaggableDeltaDownloadRequestProtocol.h>

@class NSString;

@interface FBTaggableFriendsCollectionDeltaDownloadRequest : FBGraphQLDownloadRequest <FBTaggableDeltaDownloadRequestProtocol> {

	NSString* _deltaCursor;

}

@property (nonatomic,copy) NSString * deltaCursor;                  //@synthesize deltaCursor=_deltaCursor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newQuery;
-(NSString *)deltaCursor;
-(void)setDeltaCursor:(NSString *)arg1 ;
@end
