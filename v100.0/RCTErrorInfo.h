/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RCTErrorInfo : NSObject {

	NSString* _errorMessage;
	NSArray* _stack;

}

@property (nonatomic,copy,readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stack;                      //@synthesize stack=_stack - In the implementation block
-(id)initWithErrorMessage:(id)arg1 stack:(id)arg2 ;
-(NSArray *)stack;
-(NSString *)errorMessage;
@end

