/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBURLRequestHeadersConstructor.h>
#import <Messenger/FBURLRewriteConstructing.h>

@class NSURL, NSString, NSError;

@interface FBURLRewriteConstructor : FBURLRequestHeadersConstructor <FBURLRewriteConstructing> {

	NSURL* _url;

}

@property (nonatomic,readonly) id<FBURLRequestDefining> request; 
@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,copy,readonly) NSString * scheme; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,copy,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
-(void)rewriteURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 httpHeaders:(id)arg2 request:(id)arg3 ;
-(NSURL *)url;
@end

