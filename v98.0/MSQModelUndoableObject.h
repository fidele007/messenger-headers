/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MSQModelDocumentContext;

@interface MSQModelUndoableObject : NSObject {

	NSString* _keypath;
	unsigned long long _options;
	id _objectContext;
	MSQModelDocumentContext* _context;

}

@property (nonatomic,copy,readonly) NSString * keypath;                      //@synthesize keypath=_keypath - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL wrapsUndoable; 
@property (nonatomic,readonly) BOOL wrapsCopyable; 
@property (assign,nonatomic,__weak) id objectContext;                        //@synthesize objectContext=_objectContext - In the implementation block
@property (nonatomic,retain) MSQModelDocumentContext * context;              //@synthesize context=_context - In the implementation block
-(NSString *)keypath;
-(id)initWithKeypath:(id)arg1 options:(unsigned long long)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)objectToWrap:(id)arg1 ;
-(void)updateUndoableState:(long long)arg1 ofWrappedObject:(id)arg2 ;
-(id)objectContext;
-(BOOL)wrapsUndoable;
-(BOOL)wrapsCopyable;
-(void)setObjectContext:(id)arg1 ;
-(id)init;
-(MSQModelDocumentContext *)context;
-(void)setContext:(MSQModelDocumentContext *)arg1 ;
-(unsigned long long)options;
@end

