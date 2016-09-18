/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBDialogsData : NSObject {

	NSString* _method;
	NSDictionary* _arguments;
	NSDictionary* _clientState;
	NSDictionary* _results;

}

@property (nonatomic,copy) NSString * method;                       //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSDictionary * arguments;                //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSDictionary * clientState;              //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,copy) NSDictionary * results;                  //@synthesize results=_results - In the implementation block
-(id)initWithMethod:(id)arg1 arguments:(id)arg2 ;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(NSString *)method;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(NSDictionary *)arguments;
-(void)setMethod:(NSString *)arg1 ;
-(NSDictionary *)clientState;
-(void)setClientState:(NSDictionary *)arg1 ;
@end
