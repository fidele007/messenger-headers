/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBModifiedFilterState : NSObject {

	NSString* _name;
	NSString* _handle;
	NSString* _action;
	NSString* _text;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * apiDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * loggingDictionary; 
+(id)identifierForModifiedFilter:(id)arg1 handle:(id)arg2 ;
-(id)initWithName:(id)arg1 handle:(id)arg2 action:(id)arg3 text:(id)arg4 value:(id)arg5 ;
-(NSDictionary *)apiDictionary;
-(NSDictionary *)loggingDictionary;
-(NSString *)name;
-(NSString *)action;
-(NSString *)value;
-(NSString *)text;
-(NSString *)handle;
@end

