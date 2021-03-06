/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface HTTPMessage : NSObject {

	CFHTTPMessageRef message;

}
-(id)initEmptyRequest;
-(id)initRequestWithMethod:(id)arg1 URL:(id)arg2 version:(id)arg3 ;
-(id)initResponseWithStatusCode:(long long)arg1 description:(id)arg2 version:(id)arg3 ;
-(id)headerField:(id)arg1 ;
-(void)setHeaderField:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(id)url;
-(id)body;
-(NSRange)range;
-(void)setBody:(id)arg1 ;
-(BOOL)appendData:(id)arg1 ;
-(long long)statusCode;
-(id)method;
-(id)version;
-(id)allHeaderFields;
-(BOOL)isHeaderComplete;
-(id)messageData;
@end

