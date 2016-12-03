/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlatformActionOperationDelegate;
@class FBPlatformActionProcessor, FBPlatformAction, NSString;

@interface FBPlatformActionOperation : NSObject {

	FBPlatformActionProcessor* _processor;
	BOOL _treatDataFailuresAsFatal;
	FBPlatformAction* _action;
	id<FBPlatformActionOperationDelegate> _delegate;
	/*^block*/id _completeOperationBlock;

}

@property (copy) id completeOperationBlock;                                                      //@synthesize completeOperationBlock=_completeOperationBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultErrorMessage; 
@property (nonatomic,readonly) FBPlatformAction * action;                                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlatformActionOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) FBPlatformActionProcessor * processor; 
@property (assign,nonatomic) BOOL treatDataFailuresAsFatal;                                      //@synthesize treatDataFailuresAsFatal=_treatDataFailuresAsFatal - In the implementation block
-(void)setProcessor:(FBPlatformActionProcessor *)arg1 ;
-(FBPlatformActionProcessor *)processor;
-(void)setTreatDataFailuresAsFatal:(BOOL)arg1 ;
-(void)failWithInvalidParameterErrorResponse:(id)arg1 ;
-(void)addToTransaction:(id)arg1 ;
-(void)_failWithErrorCode:(long long)arg1 errorMessage:(id)arg2 errorResponse:(id)arg3 ;
-(BOOL)handleDataError:(id)arg1 ;
-(BOOL)handleDataErrorResponse:(id)arg1 ;
-(NSString *)defaultErrorMessage;
-(void)setCompleteOperationBlock:(id)arg1 ;
-(void)_completeTransactionOperation;
-(void)_failWithServerError:(id)arg1 errorResponse:(id)arg2 ;
-(BOOL)treatDataFailuresAsFatal;
-(void)failWithServerError:(id)arg1 ;
-(id)completeOperationBlock;
-(void)cancel;
-(void)setDelegate:(id<FBPlatformActionOperationDelegate>)arg1 ;
-(id<FBPlatformActionOperationDelegate>)delegate;
-(FBPlatformAction *)action;
-(void)cleanup;
-(void)complete;
-(id)initWithAction:(id)arg1 ;
-(void)process;
@end

