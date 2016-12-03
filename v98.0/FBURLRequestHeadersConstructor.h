/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBURLRequestHeadersConstructing.h>

@protocol FBURLRequestDefining;
@class NSString, NSError, NSMutableDictionary;

@interface FBURLRequestHeadersConstructor : NSObject <FBURLRequestHeadersConstructing> {

	NSMutableDictionary* _httpHeaders;
	id<FBURLRequestDefining> _request;
	NSString* _host;
	NSString* _scheme;
	NSError* _error;

}

@property (nonatomic,readonly) id<FBURLRequestDefining> request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSString * host;                          //@synthesize host=_host - In the implementation block
@property (nonatomic,copy,readonly) NSString * scheme;                        //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(void)setValue:(id)arg1 forHttpHeaderField:(id)arg2 ;
-(id)initWithHttpHeadersDictionary:(id)arg1 request:(id)arg2 host:(id)arg3 scheme:(id)arg4 ;
-(NSString *)scheme;
-(id<FBURLRequestDefining>)request;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

