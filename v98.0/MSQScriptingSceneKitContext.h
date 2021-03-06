/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEventDispatcher.h>
#import <Messenger/MSQScriptingContext.h>

@protocol MQDocumentModelProtocol;
@class JSContext, NSString;

@interface MSQScriptingSceneKitContext : MQEventDispatcher <MSQScriptingContext> {

	id<MQDocumentModelProtocol> _document;
	JSContext* _jsContext;

}

@property (nonatomic,retain) JSContext * jsContext;                               //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,readonly) id<MQDocumentModelProtocol> document;              //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportsScriptEvaluation; 
-(id)evaluateScript:(id)arg1 fromBundle:(id)arg2 ;
-(BOOL)supportsScriptEvaluation;
-(void)_setUpNativeMethods;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id<MQDocumentModelProtocol>)document;
-(id)initWithDocument:(id)arg1 ;
-(void)setJsContext:(JSContext *)arg1 ;
-(id)evaluateScript:(id)arg1 withSourceURL:(id)arg2 ;
-(JSContext *)jsContext;
-(id)evaluateScript:(id)arg1 ;
@end

