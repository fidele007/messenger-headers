/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionPersistedPageProtocol.h>
#import <Messenger/FBConnectionPageProtocol.h>

@class NSDate, NSArray, FBGraphQLConnectionStorePageInfo, NSString;

@interface FBGraphQLConnectionPersistedBodyPage : NSObject <FBGraphQLConnectionPersistedPageProtocol, FBConnectionPageProtocol> {

	NSDate* _timestamp;
	NSArray* _edges;
	FBGraphQLConnectionStorePageInfo* _pageInfo;

}

@property (nonatomic,copy,readonly) NSArray * edges;                                     //@synthesize edges=_edges - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionStorePageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEdges:(id)arg1 pageInfo:(id)arg2 timestamp:(id)arg3 ;
-(FBGraphQLConnectionStorePageInfo *)pageInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSArray *)edges;
@end

