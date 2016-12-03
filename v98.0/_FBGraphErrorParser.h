/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _FBGraphErrorParser : NSObject {

	long long _httpStatusCode;

}

@property (assign,nonatomic) long long httpStatusCode;              //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
-(id)parseErrorFromJSONObject:(id)arg1 ;
-(BOOL)_isGraphAPIError:(id)arg1 errorDictionary:(inout id*)arg2 ;
-(BOOL)_isGraphQLError:(id)arg1 errorDictionary:(id*)arg2 ;
-(id)_parseGraphQLError:(id)arg1 ;
-(id)_parseGraphAPIError:(id)arg1 ;
-(BOOL)_isBadBatchError:(id)arg1 errorDictionary:(id*)arg2 ;
-(id)_parseBadBatchError:(id)arg1 ;
-(BOOL)_isRestAPIError:(id)arg1 errorDictionary:(id*)arg2 ;
-(id)_parseRestAPIError:(id)arg1 ;
-(void)setHttpStatusCode:(long long)arg1 ;
-(long long)httpStatusCode;
@end

