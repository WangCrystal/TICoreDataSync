//
//  TICDSFileManagerBasedWholeStoreDownloadOperation.h
//  ShoppingListMac
//
//  Created by Tim Isted on 26/04/2011.
//  Copyright 2011 Tim Isted. All rights reserved.
//

#import "TICDSWholeStoreDownloadOperation.h"

/**
 `TICDSFileManagerBasedWholeStoreDownloadOperation` is a "whole store download" operation designed for use with a `TICDSFileManagerBasedDocumentSyncManager`.
 */
@interface TICDSFileManagerBasedWholeStoreDownloadOperation : TICDSWholeStoreDownloadOperation {
@private
    NSString *_thisDocumentWholeStoreDirectoryPath;
}

/** @name Paths */

/** The path to a given client's `WholeStore.sqlite` file within this document's `WholeStore` directory. */
- (NSString *)pathToWholeStoreFileForClientWithIdentifier:(NSString *)anIdentifier;

/** The path to a given client's `AppliedSyncChanges.sqlite` file within this document's `WholeStore` directory .*/
- (NSString *)pathToAppliedSyncChangesFileForClientWithIdentifier:(NSString *)anIdentifier;

/** The path to this document's `WholeStore` directory. */
@property (retain) NSString *thisDocumentWholeStoreDirectoryPath;

@end
