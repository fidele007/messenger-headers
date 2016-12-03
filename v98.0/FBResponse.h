/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBResponding.h>

@protocol FBRequest;
@class NSDictionary, NSError, NSString;

@interface FBResponse : NSObject <FBResponding> {

	id<FBRequest> _request;
	NSDictionary* _headers;
	NSError* _error;
	id _content;

}

@property (nonatomic,readonly) id content;                               //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
-(id)initWithRequest:(id)arg1 headers:(id)arg2 content:(id)arg3 error:(id)arg4 ;
-(NSString *)description;
-(id<FBRequest>)request;
-(id)content;
-(NSDictionary *)headers;
-(NSError *)error;
@end

