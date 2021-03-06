/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBAuthenticationMethodHandlerDelegate;
@class NSString;

@interface FBAuthenticationMethodHandler : NSObject <FBNetworkerRequestDelegate> {

	id<FBAuthenticationMethodHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAuthenticationMethodHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)performAuthentication;
-(void)cancel;
-(void)setDelegate:(id<FBAuthenticationMethodHandlerDelegate>)arg1 ;
-(id)init;
-(id<FBAuthenticationMethodHandlerDelegate>)delegate;
@end

